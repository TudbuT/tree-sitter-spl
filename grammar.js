module.exports = grammar({
  name: 'SPL',

  rules: {
    source_file: $ => repeat($._statement),
    _statement: $ => seq(
      choice(
        $.string,
        $.function_definition,
        $.type_definition,
        $.with_expr,
        $.array,
        $.if,
        $.while,
        $.catch,
        $.use,
        $.include,
        $.def,
        $.number,
        $.expression,
        seq(
          repeat('&'),
          $.call
        ),
      ),
      optional(';'),
      $._spacing,
    ),
    function_definition: $ => choice($.func, $.block),
    func: $ => seq(
      'func', $._spacing,
      $.identifier, $._spacing,
      $.block,
    ),
    block: $ => seq(
      '{', $._spacing, repeat(seq(/[^ \n\r\t|]+/, $._spacing)), '|', 
        repeat($._statement), 
      '}',
    ),
    identifier: $ => /[^ \n\r\t:;&{}"']+/,
    call: $ => seq(
      choice(
        seq(
          optional($.call),
          ':',
          $.identifier,
        ),
        $.identifier,
      ),
    ),
    number: $ => /\d+(\.\d+)?/,
    string: $ => seq('"', repeat(choice(/\\./, /./)), '"'),
    expression: $ => seq('<{', $._spacing, repeat($._statement), '}'),
    with_expr: $ => seq(
      'with', $._spacing,
      repeat($.identifier),
      ';',
    ),
    array: $ => seq('[', $._spacing, repeat($._statement), ']'),
    operation: $ => /[+\-*\/%&]/,
    variable: $ => choice(
      seq('def', $._spacing, $.identifier),
      seq('=', $.identifier),
    ),
    type_definition: $ => seq(
      'construct', $._spacing, 
      $.call, $._spacing,
      optional(seq('namespace', $._spacing)),
      '{', $._spacing,
      repeat(seq($.identifier, $._spacing)), 
      optional(seq(
        ';', 
        repeat(seq($.identifier, $.block, $._spacing)),
      )),
      '}',
    ),
    _spacing: $ => /[ \n\r\t]+/,
    if: $ => seq(
      'if', $._spacing,
      '{', $._spacing,
      repeat($._statement),
      '}',
    ),
    while: $ => seq(
      'while', $._spacing,
      '{', $._spacing,
      repeat($._statement),
      '}', $._spacing,
      '{', $._spacing,
      repeat($._statement),
      '}',
    ),
    catch: $ => seq(
      'catch', $._spacing,
      '{', $._spacing,
      repeat($._statement),
      '}', $._spacing,
      '{', $._spacing,
      repeat($._statement),
      '}',
    ),
    include: $ => seq(
      'include', $.identifier, $._spacing,
      'in', $.identifier,
    ),
    use: $ => seq(
      'use', $._spacing,
      $.call,
    ),
    def: $ => seq(
      'def', $._spacing,
      $.identifier,
    ),
  },
});


