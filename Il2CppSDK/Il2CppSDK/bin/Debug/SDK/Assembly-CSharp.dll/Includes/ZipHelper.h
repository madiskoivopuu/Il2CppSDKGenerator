#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ZipHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ZipHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& _zipPrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T CopyTo(uintptr_t src, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1131E88))(0, src, dest);
	}
	template <typename T = bool> static T StartWithZipPrefix(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1131F64))(0, data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CheckAndZip(Il2CppArray<uintptr_t>* sourceData) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11320A0))(0, sourceData);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CheckAndZipFile(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1132504))(0, path);
	}
	template <typename T = Il2CppString*> static T CheckAndUnzip(Il2CppArray<uintptr_t>* sourceData) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1132578))(0, sourceData);
	}
	template <typename T = Il2CppString*> static T CheckAndUnzipFile(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x11329D0))(0, path);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ZipString(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1132A44))(0, str);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Zip(Il2CppArray<uintptr_t>* bytes, Il2CppArray<uintptr_t>* prefix) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1132140))(0, bytes, prefix);
	}
	template <typename T = Il2CppString*> static T UnzipString(Il2CppArray<uintptr_t>* bytes, int32_t offset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1132E00))(0, bytes, offset);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Unzip(Il2CppArray<uintptr_t>* bytes, int32_t offset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1132628))(0, bytes, offset);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ZipWithPass(Il2CppString* fileName, Il2CppString* str, Il2CppString* password) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x11331DC))(0, fileName, str, password);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ZipWithPass_1(IEnumerable1ValueTuple2Il2CppString*, Il2CppString*>*>* entries, Il2CppString* password) {
		return ((T (*)(void *, IEnumerable1ValueTuple2Il2CppString*, Il2CppString*>*>*, Il2CppString*))(Il2CppBase() + 0x1133640))(0, entries, password);
	}
	template <typename T = Il2CppString*> static T UnzipOneWithPass(Il2CppArray<uintptr_t>* bytes, Il2CppString* password) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x1133DD4))(0, bytes, password);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T UnzipWithPass(Il2CppArray<uintptr_t>* bytes, Il2CppString* password) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x113432C))(0, bytes, password);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T UnZipArchive(uintptr_t ms) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x113482C))(0, ms);
	}
	template <typename T = Il2CppString*> static T GetPasswordHash(Il2CppString* password) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1134C98))(0, password);
	}

};

