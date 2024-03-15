#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGroupChildEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGroupChildEntity"));
	}


	template <typename R = GroupChildComponent*> R get_groupChild() {
		return ((R (*)(IGroupChildEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGroupChild() {
		return ((R (*)(IGroupChildEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGroupChild(int32_t newId) {
		return ((R (*)(IGroupChildEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceGroupChild(int32_t newId) {
		return ((R (*)(IGroupChildEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveGroupChild() {
		return ((R (*)(IGroupChildEntity*))(Il2CppBase() + 0x0))(this);
	}

};

