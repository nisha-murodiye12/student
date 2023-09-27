document.getElementById("shuffleButton").addEventListener("click", function() {
    var allNameCells = document.querySelectorAll(".grouped-div td:nth-child(3)");
    var allNames = Array.from(allNameCells).map(cell => cell.textContent.trim());
  
    for (let i = allNames.length - 1; i > 0; i--) {
        const j = Math.floor(Math.random() * (i + 1));
        [allNames[i], allNames[j]] = [allNames[j], allNames[i]];
    }
  
    allNameCells.forEach((cell, index) => {
        cell.textContent = allNames[index];
    });
  });