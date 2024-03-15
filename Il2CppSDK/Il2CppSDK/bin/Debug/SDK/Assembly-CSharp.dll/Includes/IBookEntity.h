#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBookEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBookEntity"));
	}


	template <typename R = BookComponent*> R get_book() {
		return ((R (*)(IBookEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBook() {
		return ((R (*)(IBookEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBook(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newInitialCapImage, Il2CppString* newInitialCapText, Il2CppString* newText) {
		return ((R (*)(IBookEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newCaptionImage, newInitialCapImage, newInitialCapText, newText);
	}
	template <typename R = void> R ReplaceBook(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newInitialCapImage, Il2CppString* newInitialCapText, Il2CppString* newText) {
		return ((R (*)(IBookEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newCaptionImage, newInitialCapImage, newInitialCapText, newText);
	}
	template <typename R = void> R RemoveBook() {
		return ((R (*)(IBookEntity*))(Il2CppBase() + 0x0))(this);
	}

};

