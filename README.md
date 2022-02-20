<p align="center" width="100%"><img src="./icons/icon-alpha.png" alt="icon" width=100 height=100 style="display: block; margin: 0 auto" /></p>

# STAKZ

## What is STAKZ?
**STAKZ** is a stack-based language with enforced types.

*Example*
```stakz
func main
	args [argc: int, argv: string[]] = // Accept 2 arguments into the function 
	"Hello World"
	let n: string pop // `n` is now "Hello World"
	n "!" += // `n` is now "Hello World!"
	n out // Prints "Hello World!"
END
```
*Further examples can be found in the `/examples` dir*

---

### Todos
- [x] Create Lexer
- [ ] Create Parser
- [ ] Generate AST from Parser
- [ ] Generate Assembly from AST

---

**References used for making the Compiler**

For helping decide how to implement the Parser
- (Shunting Yard Algorithm)[https://en.wikipedia.org/wiki/Shunting-yard_algorithm]
- (Constructing an Abstract Syntax Tree)[https://stackoverflow.com/questions/1721553/how-to-construct-an-abstract-syntax-tree]
