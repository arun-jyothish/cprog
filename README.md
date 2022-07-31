

# C BOOK RECORD

~~~mermaid
graph TD

start([start])
opt{Choose option}
addfn-->cn1
opt--exit-->stop([stop])
start-->cn1((N1))-->opt
opt--add rcd-->addfn[Add New Book Record]
