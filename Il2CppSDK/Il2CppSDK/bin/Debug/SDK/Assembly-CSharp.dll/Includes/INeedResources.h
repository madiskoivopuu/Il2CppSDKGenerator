#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INeedResources
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INeedResources"));
	}


	template <typename T = HashSet1Il2CppString*>*> T GetNeedResources() {
		return ((T (*)(INeedResources*))(Il2CppBase() + 0x0))(this);
	}

};

