#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalizationHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizationHelper"));
	}


	 static ValueTuple2int64_t, Il2CppArray<Il2CppString*>*>* GetVersionAndLanguages(Il2CppString* data) {
		return ((ValueTuple2int64_t, Il2CppArray<Il2CppString*>*>* (*)(void *, Il2CppString*))(Il2CppBase() + 0x1443790))(0, data);
	}
	template <typename R = uint32_t> static R GetHexNumber(char c) {
		return ((R (*)(void *, char))(Il2CppBase() + 0x144518C))(0, c);
	}
	 static IEnumerable1IList1Il2CppString*>*>* Parse(uintptr_t reader, char delimiter, char qualifier) {
		return ((IEnumerable1IList1Il2CppString*>*>* (*)(void *, uintptr_t, char, char))(Il2CppBase() + 0x1444638))(0, reader, delimiter, qualifier);
	}

};

