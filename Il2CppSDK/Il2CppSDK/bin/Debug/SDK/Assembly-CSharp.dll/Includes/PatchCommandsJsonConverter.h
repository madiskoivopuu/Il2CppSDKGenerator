#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeListJsonConverter1.h" 
#include "PatchCommand.h" 

class PatchCommandsJsonConverter : public TypeListJsonConverter1<PatchCommand>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PatchCommandsJsonConverter"));
	}



};

