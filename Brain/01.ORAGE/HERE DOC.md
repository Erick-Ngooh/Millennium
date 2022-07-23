#### un here doc sert declarer des bout de code ou des chaine de charactere dans l'interpretueur de commande


### sa syntaxe est la suivante:

<<  _DELIMITEUR_
	BLA BLA BLA BLA 
	BLA BLA BLA BLA 
	BLA BLA BLA BLA 
_DELIMITELUR_

### << - Va suprimer toute les indentation en debut de ligne. 

example :
````
➜  Pipex git:(master) ✗ cat << END                   
heredoc> env $PWD
heredoc> END

env /home/lazarus/Pipex

````

### mettre le delimiteur entre guilleme inhibe les caractere speciaux. 
````
➜  Pipex git:(master) ✗ cat << "END"
heredoc> env == $PWD ## $PWD ne vaut plus rien
heredoc> END
env == $PWD

````