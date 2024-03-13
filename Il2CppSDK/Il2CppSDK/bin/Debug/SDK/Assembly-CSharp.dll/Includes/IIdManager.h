#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIdManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIdManager"));
	}


	template <typename T = int32_t> T CreateNewId() {
		return ((T (*)(IIdManager*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Reset(int32_t maxId) {
		return ((T (*)(IIdManager*, int32_t))(Il2CppBase() + 0x0))(this, maxId);
	}

};

