#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IParentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IParentEntity"));
	}


	template <typename R = ParentComponent*> R get_parent() {
		return ((R (*)(IParentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasParent() {
		return ((R (*)(IParentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddParent(int32_t newId) {
		return ((R (*)(IParentEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceParent(int32_t newId) {
		return ((R (*)(IParentEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveParent() {
		return ((R (*)(IParentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

