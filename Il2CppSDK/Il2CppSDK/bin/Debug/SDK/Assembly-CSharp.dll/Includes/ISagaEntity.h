#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISagaEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISagaEntity"));
	}


	template <typename T = uintptr_t> T get_saga() {
		return ((T (*)(ISagaEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSaga() {
		return ((T (*)(ISagaEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSaga(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newImage, Il2CppString* newText) {
		return ((T (*)(ISagaEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newCaptionImage, newImage, newText);
	}
	template <typename T = void> T ReplaceSaga(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newImage, Il2CppString* newText) {
		return ((T (*)(ISagaEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newCaptionImage, newImage, newText);
	}
	template <typename T = void> T RemoveSaga() {
		return ((T (*)(ISagaEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
