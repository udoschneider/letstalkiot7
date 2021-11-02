use ansi_term::Colour;

fn main() {
    println!("Hello, {}{}{}{}{} world!",
    Colour::Red.paint("c"),
    Colour::Green.paint("o"),
    Colour::Blue.paint("l"),
    Colour::Yellow.paint("o"),
    Colour::Cyan.paint("r"));
}
