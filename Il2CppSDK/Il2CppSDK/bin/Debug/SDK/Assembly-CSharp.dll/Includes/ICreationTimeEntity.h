#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICreationTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICreationTimeEntity"));
	}


	template <typename R = CreationTimeComponent*> R get_creationTime() {
		return ((R (*)(ICreationTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCreationTime() {
		return ((R (*)(ICreationTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCreationTime(int64_t newValue) {
		return ((R (*)(ICreationTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceCreationTime(int64_t newValue) {
		return ((R (*)(ICreationTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveCreationTime() {
		return ((R (*)(ICreationTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

