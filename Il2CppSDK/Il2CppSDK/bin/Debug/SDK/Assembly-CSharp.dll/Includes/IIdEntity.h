#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIdEntity"));
	}


	template <typename T = uintptr_t> T get_id() {
		return ((T (*)(IIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasId() {
		return ((T (*)(IIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddId(int32_t newValue) {
		return ((T (*)(IIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceId(int32_t newValue) {
		return ((T (*)(IIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveId() {
		return ((T (*)(IIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
