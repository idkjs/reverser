// https://sketch.sh/s/n6WqxZA5fFfL2ufh3RDvtH/
let maybe_read_line = () =>
  try (Some(read_line())) {
  | End_of_file => None
  };

let rec loop = acc =>
  switch (maybe_read_line()) {
  | Some(line) => loop([line, ...acc])
  | None => List.iter(print_endline, acc)
  };

let () = loop([]);
