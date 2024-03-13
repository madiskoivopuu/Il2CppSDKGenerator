#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICreationTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICreationTimeEntity"));
	}


	template <typename T = CreationTimeComponent*> T get_creationTime() {
		return ((T (*)(ICreationTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCreationTime() {
		return ((T (*)(ICreationTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCreationTime(int64_t newValue) {
		return ((T (*)(ICreationTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceCreationTime(int64_t newValue) {
		return ((T (*)(ICreationTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveCreationTime() {
		return ((T (*)(ICreationTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

