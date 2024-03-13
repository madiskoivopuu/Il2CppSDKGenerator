#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITextEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITextEntity"));
	}


	template <typename T = TextComponent*> T get_text() {
		return ((T (*)(ITextEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasText() {
		return ((T (*)(ITextEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddText(Il2CppString* newValue) {
		return ((T (*)(ITextEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceText(Il2CppString* newValue) {
		return ((T (*)(ITextEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveText() {
		return ((T (*)(ITextEntity*))(Il2CppBase() + 0x0))(this);
	}

};

