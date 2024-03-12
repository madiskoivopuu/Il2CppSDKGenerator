#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISeasonDataContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISeasonDataContexts"));
	}


	template <typename T = uintptr_t> T get_season() {
		return ((T (*)(ISeasonDataContexts*))(Il2CppBase() + 0x0))(this);
	}

};

}
