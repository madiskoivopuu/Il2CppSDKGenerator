#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPersonalEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPersonalEntity"));
	}


	template <typename T = PersonalComponent*> T get_personal() {
		return ((T (*)(IPersonalEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPersonal() {
		return ((T (*)(IPersonalEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPersonal(int64_t newPlayerId) {
		return ((T (*)(IPersonalEntity*, int64_t))(Il2CppBase() + 0x0))(this, newPlayerId);
	}
	template <typename T = void> T ReplacePersonal(int64_t newPlayerId) {
		return ((T (*)(IPersonalEntity*, int64_t))(Il2CppBase() + 0x0))(this, newPlayerId);
	}
	template <typename T = void> T RemovePersonal() {
		return ((T (*)(IPersonalEntity*))(Il2CppBase() + 0x0))(this);
	}

};

