# Solution to the MDETools'19 Challenge Problem using EMI

This repository contains several folders and files;
	* **model**: The model of our solution designed using the tUML syntax and exported to the standardized XMI format.
	* **ChallengeAbstractedEnv.emi**: The folder generated by the EMI framework with the abtracted environment.
	* **ChallengeConcreteEnv.emi**: The folder generated by the EMI framework with the concrete environment.
	* **PropertiesLTL.gpsl**: The file containing the properties expressed in LTL using the [GPSL syntax](https://plug-obp.github.io/properties/2019/05/09/buchi/).

Folders prefixed by **.emi** contains also several subfolders and files:
	* **atoms**: The generated C code of atomic propositions used for model-checking.
	* **build**: The executable binary of EMI for this UML model.
	* **obp2-config**: Configuration file to run the OBP2 model-checker with EMI.
	* **src**: The C code of the model obtained from the XMI files with the model serializer of EMI.
	* **src-models**: The source files of the model in the tUML syntax.
	* **uml**: The design model in the standardized XMI format.
	* **Makefile.config**: The configuration for compiling EMI.

To run EMI with the concrete environment model, the foollowing command line must be executed in the **ChallengeConcreteEnv.emi** folder: ```./build/host/interpreter```