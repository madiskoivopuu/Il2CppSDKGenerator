#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ZipHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ZipHelper"));
	}

	template <typename R = Il2CppArray<uint8_t>*> static R& _zipPrefix() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> static R CopyTo(uintptr_t src, uintptr_t dest) {
		return ((R (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1131E88))(0, src, dest);
	}
	template <typename R = bool> static R StartWithZipPrefix(Il2CppArray<uint8_t>* data) {
		return ((R (*)(void *, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x1131F64))(0, data);
	}
	template <typename R = Il2CppArray<uint8_t>*> static R CheckAndZip(Il2CppArray<uint8_t>* sourceData) {
		return ((R (*)(void *, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x11320A0))(0, sourceData);
	}
	template <typename R = Il2CppArray<uint8_t>*> static R CheckAndZipFile(Il2CppString* path) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1132504))(0, path);
	}
	template <typename R = Il2CppString*> static R CheckAndUnzip(Il2CppArray<uint8_t>* sourceData) {
		return ((R (*)(void *, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x1132578))(0, sourceData);
	}
	template <typename R = Il2CppString*> static R CheckAndUnzipFile(Il2CppString* path) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x11329D0))(0, path);
	}
	template <typename R = Il2CppArray<uint8_t>*> static R ZipString(Il2CppString* str) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1132A44))(0, str);
	}
	template <typename R = Il2CppArray<uint8_t>*> static R Zip(Il2CppArray<uint8_t>* bytes, Il2CppArray<uint8_t>* prefix) {
		return ((R (*)(void *, Il2CppArray<uint8_t>*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x1132140))(0, bytes, prefix);
	}
	template <typename R = Il2CppString*> static R UnzipString(Il2CppArray<uint8_t>* bytes, int32_t offset) {
		return ((R (*)(void *, Il2CppArray<uint8_t>*, int32_t))(Il2CppBase() + 0x1132E00))(0, bytes, offset);
	}
	template <typename R = Il2CppArray<uint8_t>*> static R Unzip(Il2CppArray<uint8_t>* bytes, int32_t offset) {
		return ((R (*)(void *, Il2CppArray<uint8_t>*, int32_t))(Il2CppBase() + 0x1132628))(0, bytes, offset);
	}
	template <typename R = Il2CppArray<uint8_t>*> static R ZipWithPass(Il2CppString* fileName, Il2CppString* str, Il2CppString* password) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x11331DC))(0, fileName, str, password);
	}
	template <typename R = Il2CppArray<uint8_t>*> static R ZipWithPass_1(IEnumerable1<ValueTuple2<Il2CppString*, Il2CppString*>*>* entries, Il2CppString* password) {
		return ((R (*)(void *, IEnumerable1<ValueTuple2<Il2CppString*, Il2CppString*>*>*, Il2CppString*))(Il2CppBase() + 0x1133640))(0, entries, password);
	}
	template <typename R = Il2CppString*> static R UnzipOneWithPass(Il2CppArray<uint8_t>* bytes, Il2CppString* password) {
		return ((R (*)(void *, Il2CppArray<uint8_t>*, Il2CppString*))(Il2CppBase() + 0x1133DD4))(0, bytes, password);
	}
	 static Il2CppDictionary<Il2CppString*, Il2CppString*>* UnzipWithPass(Il2CppArray<uint8_t>* bytes, Il2CppString* password) {
		return ((Il2CppDictionary<Il2CppString*, Il2CppString*>* (*)(void *, Il2CppArray<uint8_t>*, Il2CppString*))(Il2CppBase() + 0x113432C))(0, bytes, password);
	}
	 static Il2CppDictionary<Il2CppString*, Il2CppString*>* UnZipArchive(uintptr_t ms) {
		return ((Il2CppDictionary<Il2CppString*, Il2CppString*>* (*)(void *, uintptr_t))(Il2CppBase() + 0x113482C))(0, ms);
	}
	template <typename R = Il2CppString*> static R GetPasswordHash(Il2CppString* password) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1134C98))(0, password);
	}

};

