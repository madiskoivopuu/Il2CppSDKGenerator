#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IParentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IParentEntity"));
	}


	template <typename T = uintptr_t> T get_parent() {
		return ((T (*)(IParentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasParent() {
		return ((T (*)(IParentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddParent(int32_t newId) {
		return ((T (*)(IParentEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceParent(int32_t newId) {
		return ((T (*)(IParentEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveParent() {
		return ((T (*)(IParentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
