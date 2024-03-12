#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class DataStringReaderUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "DataStringReaderUtil"));
	}

	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _words() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _names() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _curr() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_NameCount() {
		return ((T (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEAFB14))(this);
	}
	template <typename T = bool> T get_HasNext() {
		return ((T (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEAFB30))(this);
	}
	template <typename T = Il2CppString*> T GetName(int32_t aIndex) {
		return ((T (*)(DataStringReaderUtil*, int32_t))(Il2CppBase() + 0xEB0074))(this, aIndex);
	}
	template <typename T = int32_t> T Int() {
		return ((T (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEB00B0))(this);
	}
	template <typename T = int32_t> T Int_1(Il2CppString* aName) {
		return ((T (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB0198))(this, aName);
	}
	template <typename T = int64_t> T Long() {
		return ((T (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEB02E8))(this);
	}
	template <typename T = int64_t> T Long_1(Il2CppString* aName) {
		return ((T (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB0300))(this, aName);
	}
	template <typename T = bool> T Bool() {
		return ((T (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEB0318))(this);
	}
	template <typename T = bool> T Bool_1(Il2CppString* aName) {
		return ((T (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB038C))(this, aName);
	}
	template <typename T = float> T Float() {
		return ((T (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEB0410))(this);
	}
	template <typename T = float> T Float_1(Il2CppString* aName) {
		return ((T (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB0428))(this, aName);
	}
	template <typename T = Il2CppString*> T String() {
		return ((T (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEB0440))(this);
	}
	template <typename T = Il2CppString*> T String_1(Il2CppString* aName) {
		return ((T (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB0444))(this, aName);
	}
	template <typename T = uintptr_t> T Data() {
		return ((T (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEB0448))(this);
	}
	template <typename T = uintptr_t> T Data_1(Il2CppString* aName) {
		return ((T (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB0714))(this, aName);
	}
	template <typename T = void> T Data_2(uintptr_t aBaseObject) {
		return ((T (*)(DataStringReaderUtil*, uintptr_t))(Il2CppBase() + 0xEB072C))(this, aBaseObject);
	}
	template <typename T = void> T Data_3(Il2CppString* aName, uintptr_t aBaseObject) {
		return ((T (*)(DataStringReaderUtil*, Il2CppString*, uintptr_t))(Il2CppBase() + 0xEB081C))(this, aName, aBaseObject);
	}
	template <typename T = Il2CppString*> T Read(Il2CppString* aName) {
		return ((T (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB01B0))(this, aName);
	}
	template <typename T = Il2CppString*> T Read_1() {
		return ((T (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEB00C8))(this);
	}
	template <typename T = uintptr_t> T CreateObject(Il2CppString* aDataString) {
		return ((T (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB0460))(this, aDataString);
	}

};

}
