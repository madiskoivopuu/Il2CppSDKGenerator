#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITempBuffEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITempBuffEntity"));
	}


	template <typename R = TempBuffComponent*> R get_tempBuff() {
		return ((R (*)(ITempBuffEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTempBuff() {
		return ((R (*)(ITempBuffEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTempBuff(Il2CppString* newName) {
		return ((R (*)(ITempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceTempBuff(Il2CppString* newName) {
		return ((R (*)(ITempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveTempBuff() {
		return ((R (*)(ITempBuffEntity*))(Il2CppBase() + 0x0))(this);
	}

};

