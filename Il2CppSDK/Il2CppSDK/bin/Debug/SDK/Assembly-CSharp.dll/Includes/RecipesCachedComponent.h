#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RecipesCachedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecipesCachedComponent"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
