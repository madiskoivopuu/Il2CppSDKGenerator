#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPageEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPageEntity"));
	}


	template <typename R = PageComponent*> R get_page() {
		return ((R (*)(IPageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPage() {
		return ((R (*)(IPageEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPage(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newText) {
		return ((R (*)(IPageEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newCaptionImage, newText);
	}
	template <typename R = void> R ReplacePage(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newText) {
		return ((R (*)(IPageEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newCaptionImage, newText);
	}
	template <typename R = void> R RemovePage() {
		return ((R (*)(IPageEntity*))(Il2CppBase() + 0x0))(this);
	}

};

