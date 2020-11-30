##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PL1
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/lucas/OneDrive/Documentos/DocumentosPrueba
ProjectPath            :=C:/Users/lucas/OneDrive/Documentos/DocumentosPrueba/PL1
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=lucas
Date                   :=29/11/2020
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="PL1.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Interface.cpp$(ObjectSuffix) $(IntermediateDirectory)/CoreLogic.cpp$(ObjectSuffix) $(IntermediateDirectory)/Project.cpp$(ObjectSuffix) $(IntermediateDirectory)/DListS.cpp$(ObjectSuffix) $(IntermediateDirectory)/Queue.cpp$(ObjectSuffix) $(IntermediateDirectory)/DListNodeP.cpp$(ObjectSuffix) $(IntermediateDirectory)/DListP.cpp$(ObjectSuffix) $(IntermediateDirectory)/DListNodeS.cpp$(ObjectSuffix) $(IntermediateDirectory)/QueueNode.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/Student.cpp$(ObjectSuffix) $(IntermediateDirectory)/StackNode.cpp$(ObjectSuffix) $(IntermediateDirectory)/Stack.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/DocumentosPrueba/PL1/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Interface.cpp$(ObjectSuffix): Interface.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Interface.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Interface.cpp$(DependSuffix) -MM Interface.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/DocumentosPrueba/PL1/Interface.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Interface.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Interface.cpp$(PreprocessSuffix): Interface.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Interface.cpp$(PreprocessSuffix) Interface.cpp

$(IntermediateDirectory)/CoreLogic.cpp$(ObjectSuffix): CoreLogic.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/CoreLogic.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/CoreLogic.cpp$(DependSuffix) -MM CoreLogic.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/DocumentosPrueba/PL1/CoreLogic.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/CoreLogic.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/CoreLogic.cpp$(PreprocessSuffix): CoreLogic.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/CoreLogic.cpp$(PreprocessSuffix) CoreLogic.cpp

$(IntermediateDirectory)/Project.cpp$(ObjectSuffix): Project.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Project.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Project.cpp$(DependSuffix) -MM Project.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/DocumentosPrueba/PL1/Project.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Project.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Project.cpp$(PreprocessSuffix): Project.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Project.cpp$(PreprocessSuffix) Project.cpp

$(IntermediateDirectory)/DListS.cpp$(ObjectSuffix): DListS.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DListS.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/DListS.cpp$(DependSuffix) -MM DListS.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/DocumentosPrueba/PL1/DListS.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DListS.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DListS.cpp$(PreprocessSuffix): DListS.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DListS.cpp$(PreprocessSuffix) DListS.cpp

$(IntermediateDirectory)/Queue.cpp$(ObjectSuffix): Queue.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Queue.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Queue.cpp$(DependSuffix) -MM Queue.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/DocumentosPrueba/PL1/Queue.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Queue.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Queue.cpp$(PreprocessSuffix): Queue.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Queue.cpp$(PreprocessSuffix) Queue.cpp

$(IntermediateDirectory)/DListNodeP.cpp$(ObjectSuffix): DListNodeP.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DListNodeP.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/DListNodeP.cpp$(DependSuffix) -MM DListNodeP.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/DocumentosPrueba/PL1/DListNodeP.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DListNodeP.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DListNodeP.cpp$(PreprocessSuffix): DListNodeP.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DListNodeP.cpp$(PreprocessSuffix) DListNodeP.cpp

$(IntermediateDirectory)/DListP.cpp$(ObjectSuffix): DListP.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DListP.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/DListP.cpp$(DependSuffix) -MM DListP.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/DocumentosPrueba/PL1/DListP.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DListP.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DListP.cpp$(PreprocessSuffix): DListP.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DListP.cpp$(PreprocessSuffix) DListP.cpp

$(IntermediateDirectory)/DListNodeS.cpp$(ObjectSuffix): DListNodeS.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/DListNodeS.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/DListNodeS.cpp$(DependSuffix) -MM DListNodeS.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/DocumentosPrueba/PL1/DListNodeS.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/DListNodeS.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/DListNodeS.cpp$(PreprocessSuffix): DListNodeS.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/DListNodeS.cpp$(PreprocessSuffix) DListNodeS.cpp

$(IntermediateDirectory)/QueueNode.cpp$(ObjectSuffix): QueueNode.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/QueueNode.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/QueueNode.cpp$(DependSuffix) -MM QueueNode.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/DocumentosPrueba/PL1/QueueNode.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/QueueNode.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/QueueNode.cpp$(PreprocessSuffix): QueueNode.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/QueueNode.cpp$(PreprocessSuffix) QueueNode.cpp

$(IntermediateDirectory)/Student.cpp$(ObjectSuffix): Student.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Student.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Student.cpp$(DependSuffix) -MM Student.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/DocumentosPrueba/PL1/Student.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Student.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Student.cpp$(PreprocessSuffix): Student.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Student.cpp$(PreprocessSuffix) Student.cpp

$(IntermediateDirectory)/StackNode.cpp$(ObjectSuffix): StackNode.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/StackNode.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/StackNode.cpp$(DependSuffix) -MM StackNode.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/DocumentosPrueba/PL1/StackNode.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/StackNode.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/StackNode.cpp$(PreprocessSuffix): StackNode.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/StackNode.cpp$(PreprocessSuffix) StackNode.cpp

$(IntermediateDirectory)/Stack.cpp$(ObjectSuffix): Stack.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Stack.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Stack.cpp$(DependSuffix) -MM Stack.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/DocumentosPrueba/PL1/Stack.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Stack.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Stack.cpp$(PreprocessSuffix): Stack.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Stack.cpp$(PreprocessSuffix) Stack.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


