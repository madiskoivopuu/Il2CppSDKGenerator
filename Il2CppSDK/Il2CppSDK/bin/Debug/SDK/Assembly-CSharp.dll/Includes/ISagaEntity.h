#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISagaEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISagaEntity"));
	}


	template <typename R = SagaComponent*> R get_saga() {
		return ((R (*)(ISagaEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSaga() {
		return ((R (*)(ISagaEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSaga(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newImage, Il2CppString* newText) {
		return ((R (*)(ISagaEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newCaptionImage, newImage, newText);
	}
	template <typename R = void> R ReplaceSaga(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newImage, Il2CppString* newText) {
		return ((R (*)(ISagaEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newCaption, newCaptionImage, newImage, newText);
	}
	template <typename R = void> R RemoveSaga() {
		return ((R (*)(ISagaEntity*))(Il2CppBase() + 0x0))(this);
	}

};

