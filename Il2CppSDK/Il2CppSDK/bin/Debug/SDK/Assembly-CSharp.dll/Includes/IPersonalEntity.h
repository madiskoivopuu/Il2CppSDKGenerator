#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPersonalEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPersonalEntity"));
	}


	template <typename R = PersonalComponent*> R get_personal() {
		return ((R (*)(IPersonalEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPersonal() {
		return ((R (*)(IPersonalEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPersonal(int64_t newPlayerId) {
		return ((R (*)(IPersonalEntity*, int64_t))(Il2CppBase() + 0x0))(this, newPlayerId);
	}
	template <typename R = void> R ReplacePersonal(int64_t newPlayerId) {
		return ((R (*)(IPersonalEntity*, int64_t))(Il2CppBase() + 0x0))(this, newPlayerId);
	}
	template <typename R = void> R RemovePersonal() {
		return ((R (*)(IPersonalEntity*))(Il2CppBase() + 0x0))(this);
	}

};

