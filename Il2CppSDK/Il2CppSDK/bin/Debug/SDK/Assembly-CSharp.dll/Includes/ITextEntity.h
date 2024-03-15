#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITextEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITextEntity"));
	}


	template <typename R = TextComponent*> R get_text() {
		return ((R (*)(ITextEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasText() {
		return ((R (*)(ITextEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddText(Il2CppString* newValue) {
		return ((R (*)(ITextEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceText(Il2CppString* newValue) {
		return ((R (*)(ITextEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveText() {
		return ((R (*)(ITextEntity*))(Il2CppBase() + 0x0))(this);
	}

};

