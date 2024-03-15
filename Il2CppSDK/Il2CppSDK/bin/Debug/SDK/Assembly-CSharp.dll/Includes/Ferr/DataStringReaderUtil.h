#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class DataStringReaderUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "DataStringReaderUtil"));
	}

	template <typename R = Ferr::DataStringType*> R& _type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& _words() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& _names() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& _curr() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = int32_t> R get_NameCount() {
		return ((R (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEAFB14))(this);
	}
	template <typename R = bool> R get_HasNext() {
		return ((R (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEAFB30))(this);
	}
	template <typename R = Il2CppString*> R GetName(int32_t aIndex) {
		return ((R (*)(DataStringReaderUtil*, int32_t))(Il2CppBase() + 0xEB0074))(this, aIndex);
	}
	template <typename R = int32_t> R Int() {
		return ((R (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEB00B0))(this);
	}
	template <typename R = int32_t> R Int_1(Il2CppString* aName) {
		return ((R (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB0198))(this, aName);
	}
	template <typename R = int64_t> R Long() {
		return ((R (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEB02E8))(this);
	}
	template <typename R = int64_t> R Long_1(Il2CppString* aName) {
		return ((R (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB0300))(this, aName);
	}
	template <typename R = bool> R Bool() {
		return ((R (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEB0318))(this);
	}
	template <typename R = bool> R Bool_1(Il2CppString* aName) {
		return ((R (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB038C))(this, aName);
	}
	template <typename R = float> R Float() {
		return ((R (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEB0410))(this);
	}
	template <typename R = float> R Float_1(Il2CppString* aName) {
		return ((R (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB0428))(this, aName);
	}
	template <typename R = Il2CppString*> R String() {
		return ((R (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEB0440))(this);
	}
	template <typename R = Il2CppString*> R String_1(Il2CppString* aName) {
		return ((R (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB0444))(this, aName);
	}
	template <typename R = Il2CppObject*> R Data() {
		return ((R (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEB0448))(this);
	}
	template <typename R = Il2CppObject*> R Data_1(Il2CppString* aName) {
		return ((R (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB0714))(this, aName);
	}
	template <typename R = void> R Data_2(uintptr_t aBaseObject) {
		return ((R (*)(DataStringReaderUtil*, uintptr_t))(Il2CppBase() + 0xEB072C))(this, aBaseObject);
	}
	template <typename R = void> R Data_3(Il2CppString* aName, uintptr_t aBaseObject) {
		return ((R (*)(DataStringReaderUtil*, Il2CppString*, uintptr_t))(Il2CppBase() + 0xEB081C))(this, aName, aBaseObject);
	}
	template <typename R = Il2CppString*> R Read(Il2CppString* aName) {
		return ((R (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB01B0))(this, aName);
	}
	template <typename R = Il2CppString*> R Read_1() {
		return ((R (*)(DataStringReaderUtil*))(Il2CppBase() + 0xEB00C8))(this);
	}
	template <typename R = Il2CppObject*> R CreateObject(Il2CppString* aDataString) {
		return ((R (*)(DataStringReaderUtil*, Il2CppString*))(Il2CppBase() + 0xEB0460))(this, aDataString);
	}

};

}
