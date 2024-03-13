#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITempBuffEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITempBuffEntity"));
	}


	template <typename T = TempBuffComponent*> T get_tempBuff() {
		return ((T (*)(ITempBuffEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTempBuff() {
		return ((T (*)(ITempBuffEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTempBuff(Il2CppString* newName) {
		return ((T (*)(ITempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceTempBuff(Il2CppString* newName) {
		return ((T (*)(ITempBuffEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveTempBuff() {
		return ((T (*)(ITempBuffEntity*))(Il2CppBase() + 0x0))(this);
	}

};

