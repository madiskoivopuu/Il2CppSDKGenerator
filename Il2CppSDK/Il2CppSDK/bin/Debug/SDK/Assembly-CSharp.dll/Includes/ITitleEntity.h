#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITitleEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITitleEntity"));
	}


	template <typename R = TitleComponent*> R get_title() {
		return ((R (*)(ITitleEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTitle() {
		return ((R (*)(ITitleEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTitle(Il2CppString* newValue) {
		return ((R (*)(ITitleEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceTitle(Il2CppString* newValue) {
		return ((R (*)(ITitleEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveTitle() {
		return ((R (*)(ITitleEntity*))(Il2CppBase() + 0x0))(this);
	}

};

