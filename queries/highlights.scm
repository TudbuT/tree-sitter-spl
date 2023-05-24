[
  "construct" "namespace"
  "func"
  "def"
  "with"
  "while"
  "if"
  "catch"
  "include" "in"
  "use"
] @keyword

(number) @number
(string) @string
(call (call) @function (identifier) @property)