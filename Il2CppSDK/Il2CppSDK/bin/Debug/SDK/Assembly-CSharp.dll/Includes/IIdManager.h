#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIdManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIdManager"));
	}


	template <typename R = int32_t> R CreateNewId() {
		return ((R (*)(IIdManager*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Reset(int32_t maxId) {
		return ((R (*)(IIdManager*, int32_t))(Il2CppBase() + 0x0))(this, maxId);
	}

};

