#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesOurUtils {

class Misc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesOurUtils", "Misc"));
	}


	template <typename R = bool> static R BuffersAreIdentical(Il2CppArray<uint8_t>* a, Il2CppArray<uint8_t>* b) {
		return ((R (*)(void *, Il2CppArray<uint8_t>*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x1D69F54))(0, a, b);
	}
	template <typename R = Il2CppArray<uint8_t>*> static R GetSubsetBytes(Il2CppArray<uint8_t>* array, int32_t offset, int32_t length) {
		return ((R (*)(void *, Il2CppArray<uint8_t>*, int32_t, int32_t))(Il2CppBase() + 0x1D69FD8))(0, array, offset, length);
	}
	 static uintptr_t CheckNotNull(uintptr_t value) {
		return ((uintptr_t (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, value);
	}
	 static uintptr_t CheckNotNull_1(uintptr_t value, Il2CppString* paramName) {
		return ((uintptr_t (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(0, value, paramName);
	}

};

}
