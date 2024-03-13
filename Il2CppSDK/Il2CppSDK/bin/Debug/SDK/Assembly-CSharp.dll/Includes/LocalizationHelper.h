#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalizationHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizationHelper"));
	}


	template <typename T = ValueTuple2int64_t, Il2CppArray<uintptr_t>*>*> static T GetVersionAndLanguages(Il2CppString* data) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1443790))(0, data);
	}
	template <typename T = uint32_t> static T GetHexNumber(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x144518C))(0, c);
	}
	template <typename T = IEnumerable1IList1Il2CppString*>*>*> static T Parse(uintptr_t reader, char delimiter, char qualifier) {
		return ((T (*)(void *, uintptr_t, char, char))(Il2CppBase() + 0x1444638))(0, reader, delimiter, qualifier);
	}

};

