#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPageEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPageEntity"));
	}


	template <typename T = uintptr_t> T get_page() {
		return ((T (*)(IPageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPage() {
		return ((T (*)(IPageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPage(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newText) {
		return ((T (*)(IPageEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newCaptionImage, newText);
	}
	template <typename T = void> T ReplacePage(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newText) {
		return ((T (*)(IPageEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newCaptionImage, newText);
	}
	template <typename T = void> T RemovePage() {
		return ((T (*)(IPageEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
