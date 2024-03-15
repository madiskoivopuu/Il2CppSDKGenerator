#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INeedResources
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INeedResources"));
	}


	 HashSet1<Il2CppString*>* GetNeedResources() {
		return ((HashSet1<Il2CppString*>* (*)(INeedResources*))(Il2CppBase() + 0x0))(this);
	}

};

