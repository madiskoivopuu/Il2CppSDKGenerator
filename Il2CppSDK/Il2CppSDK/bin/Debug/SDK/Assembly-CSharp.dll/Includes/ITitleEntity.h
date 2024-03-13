#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITitleEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITitleEntity"));
	}


	template <typename T = TitleComponent*> T get_title() {
		return ((T (*)(ITitleEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTitle() {
		return ((T (*)(ITitleEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTitle(Il2CppString* newValue) {
		return ((T (*)(ITitleEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceTitle(Il2CppString* newValue) {
		return ((T (*)(ITitleEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveTitle() {
		return ((T (*)(ITitleEntity*))(Il2CppBase() + 0x0))(this);
	}

};

