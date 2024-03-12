#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHistoryContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHistoryContexts"));
	}


	template <typename T = uintptr_t> T get_history() {
		return ((T (*)(IHistoryContexts*))(Il2CppBase() + 0x0))(this);
	}

};

}
