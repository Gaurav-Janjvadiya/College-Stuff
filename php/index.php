<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title></title>
</head>
<body 
style="height: 100vh; background-color: lightgray; width: 100%; display: flex; justify-content: center ; align-items: center;  letter-spacing: 2px;"
>
    <form 
    style="flex-direction: column; display: flex; padding:1rem; border: 1px solid gray; border-radius:1rem; justify-content: center ; align-items: center;" 
    action="Output.php" 
    method="POST">
        
        <input 
        style="all:initial; font-family: monospace; font-size: 20px; padding: 1rem 2rem; background-color: lightcyan; margin: 1rem; border-radius: 2rem; color: black; " type="text" 
        placeholder="enter your name" 
        name="name"
        >

        <input 
        style="all:initial; font-family: monospace; font-size: 20px; padding: 1rem 2rem; background-color: lightcyan; margin: 1rem; border-radius: 2rem; color: black; " 
        type="text" 
        placeholder="subject one marks" 
        name="sub1"
        >

        <input 
        style="all:initial; font-family: monospace; font-size: 20px; padding: 1rem 2rem; background-color: lightcyan; margin: 1rem; border-radius: 2rem; color: black; " 
        type="text" 
        placeholder="subject two marks"  
        name="sub2"
        >

        <input 
        style="all:initial; font-family: monospace; font-size: 20px; padding: 1rem 2rem; background-color: lightcyan; margin: 1rem; border-radius: 2rem; color: black; " 
        type="text" 
        placeholder="subject three marks"  
        name="sub3"
        >

        <input 
        style="all:initial; font-family: monospace; font-size: 20px; padding:0.3rem 1rem; background-color: orangered; border-radius: 3rem; color: white;" 
        type="submit" 
        name="submit"
        >
    </form>
</body>
</html>