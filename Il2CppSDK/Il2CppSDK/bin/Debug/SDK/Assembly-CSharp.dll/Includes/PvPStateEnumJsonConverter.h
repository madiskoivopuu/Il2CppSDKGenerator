#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeEnumJsonConverter1.h" 
#include "PvPState.h" 

class PvPStateEnumJsonConverter : public TypeEnumJsonConverter1<PvPState*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvPStateEnumJsonConverter"));
	}



};
