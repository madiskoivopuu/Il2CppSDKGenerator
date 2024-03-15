#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGenderEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGenderEntity"));
	}


	template <typename R = GenderComponent*> R get_gender() {
		return ((R (*)(IGenderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGender() {
		return ((R (*)(IGenderEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGender(Gender newType) {
		return ((R (*)(IGenderEntity*, Gender))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R ReplaceGender(Gender newType) {
		return ((R (*)(IGenderEntity*, Gender))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R RemoveGender() {
		return ((R (*)(IGenderEntity*))(Il2CppBase() + 0x0))(this);
	}

};

