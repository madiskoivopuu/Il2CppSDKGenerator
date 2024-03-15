#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIdEntity"));
	}


	template <typename R = IdComponent*> R get_id() {
		return ((R (*)(IIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasId() {
		return ((R (*)(IIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddId(int32_t newValue) {
		return ((R (*)(IIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceId(int32_t newValue) {
		return ((R (*)(IIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveId() {
		return ((R (*)(IIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

