#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBookEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBookEntity"));
	}


	template <typename T = BookComponent*> T get_book() {
		return ((T (*)(IBookEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBook() {
		return ((T (*)(IBookEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBook(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newInitialCapImage, Il2CppString* newInitialCapText, Il2CppString* newText) {
		return ((T (*)(IBookEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newCaptionImage, newInitialCapImage, newInitialCapText, newText);
	}
	template <typename T = void> T ReplaceBook(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newInitialCapImage, Il2CppString* newInitialCapText, Il2CppString* newText) {
		return ((T (*)(IBookEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newCaptionImage, newInitialCapImage, newInitialCapText, newText);
	}
	template <typename T = void> T RemoveBook() {
		return ((T (*)(IBookEntity*))(Il2CppBase() + 0x0))(this);
	}

};

