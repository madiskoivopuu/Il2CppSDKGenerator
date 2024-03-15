#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass310
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass31_0"));
	}

	template <typename R = Il2CppString*> R& categoryStr() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = StoreCategory> R& storeCategory() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Func2<Category, bool>*& 9__0() {
		return *(Func2<Category, bool>**)((uintptr_t)this + 0x20);
	}
	 Action1<int64_t>*& 9__1() {
		return *(Action1<int64_t>**)((uintptr_t)this + 0x28);
	}
	 Action1<int64_t>*& 9__3() {
		return *(Action1<int64_t>**)((uintptr_t)this + 0x30);
	}
	 Action1<int64_t>*& 9__4() {
		return *(Action1<int64_t>**)((uintptr_t)this + 0x38);
	}
	 Func2<Category, bool>*& 9__2() {
		return *(Func2<Category, bool>**)((uintptr_t)this + 0x40);
	}
	 Action1<int64_t>*& 9__5() {
		return *(Action1<int64_t>**)((uintptr_t)this + 0x48);
	}
	 Action1<int64_t>*& 9__6() {
		return *(Action1<int64_t>**)((uintptr_t)this + 0x50);
	}
	 Action1<int64_t>*& 9__7() {
		return *(Action1<int64_t>**)((uintptr_t)this + 0x58);
	}
	 Func2<Category, bool>*& 9__8() {
		return *(Func2<Category, bool>**)((uintptr_t)this + 0x60);
	}
	 Action1<int64_t>*& 9__9() {
		return *(Action1<int64_t>**)((uintptr_t)this + 0x68);
	}
	 Action1<int64_t>*& 9__10() {
		return *(Action1<int64_t>**)((uintptr_t)this + 0x70);
	}
	 Func2<Category, bool>*& 9__11() {
		return *(Func2<Category, bool>**)((uintptr_t)this + 0x78);
	}
	 Action1<int64_t>*& 9__12() {
		return *(Action1<int64_t>**)((uintptr_t)this + 0x80);
	}
	 Func2<Category, bool>*& 9__13() {
		return *(Func2<Category, bool>**)((uintptr_t)this + 0x88);
	}
	 Action1<int64_t>*& 9__14() {
		return *(Action1<int64_t>**)((uintptr_t)this + 0x90);
	}
	 Action1<int64_t>*& 9__15() {
		return *(Action1<int64_t>**)((uintptr_t)this + 0x98);
	}
	 Func2<Category, bool>*& 9__16() {
		return *(Func2<Category, bool>**)((uintptr_t)this + 0xA0);
	}
	 Action1<int64_t>*& 9__17() {
		return *(Action1<int64_t>**)((uintptr_t)this + 0xA8);
	}

	template <typename R = bool> R FillProductsb__0(Category c) {
		return ((R (*)(cDisplayClass310*, Category))(Il2CppBase() + 0x229D8E0))(this, c);
	}
	template <typename R = void> R FillProductsb__1(int64_t storeId) {
		return ((R (*)(cDisplayClass310*, int64_t))(Il2CppBase() + 0x229D8F4))(this, storeId);
	}
	template <typename R = void> R FillProductsb__3(int64_t storeId) {
		return ((R (*)(cDisplayClass310*, int64_t))(Il2CppBase() + 0x229D908))(this, storeId);
	}
	template <typename R = void> R FillProductsb__4(int64_t storeId) {
		return ((R (*)(cDisplayClass310*, int64_t))(Il2CppBase() + 0x229D91C))(this, storeId);
	}
	template <typename R = bool> R FillProductsb__2(Category c) {
		return ((R (*)(cDisplayClass310*, Category))(Il2CppBase() + 0x229D930))(this, c);
	}
	template <typename R = void> R FillProductsb__5(int64_t storeId) {
		return ((R (*)(cDisplayClass310*, int64_t))(Il2CppBase() + 0x229D944))(this, storeId);
	}
	template <typename R = void> R FillProductsb__6(int64_t storeId) {
		return ((R (*)(cDisplayClass310*, int64_t))(Il2CppBase() + 0x229D958))(this, storeId);
	}
	template <typename R = void> R FillProductsb__7(int64_t storeId) {
		return ((R (*)(cDisplayClass310*, int64_t))(Il2CppBase() + 0x229D96C))(this, storeId);
	}
	template <typename R = bool> R FillProductsb__8(Category c) {
		return ((R (*)(cDisplayClass310*, Category))(Il2CppBase() + 0x229D980))(this, c);
	}
	template <typename R = void> R FillProductsb__9(int64_t storeId) {
		return ((R (*)(cDisplayClass310*, int64_t))(Il2CppBase() + 0x229D994))(this, storeId);
	}
	template <typename R = void> R FillProductsb__10(int64_t storeId) {
		return ((R (*)(cDisplayClass310*, int64_t))(Il2CppBase() + 0x229D9A8))(this, storeId);
	}
	template <typename R = bool> R FillProductsb__11(Category c) {
		return ((R (*)(cDisplayClass310*, Category))(Il2CppBase() + 0x229D9BC))(this, c);
	}
	template <typename R = void> R FillProductsb__12(int64_t storeId) {
		return ((R (*)(cDisplayClass310*, int64_t))(Il2CppBase() + 0x229D9D0))(this, storeId);
	}
	template <typename R = bool> R FillProductsb__13(Category c) {
		return ((R (*)(cDisplayClass310*, Category))(Il2CppBase() + 0x229D9E4))(this, c);
	}
	template <typename R = void> R FillProductsb__14(int64_t storeId) {
		return ((R (*)(cDisplayClass310*, int64_t))(Il2CppBase() + 0x229D9F8))(this, storeId);
	}
	template <typename R = void> R FillProductsb__15(int64_t storeId) {
		return ((R (*)(cDisplayClass310*, int64_t))(Il2CppBase() + 0x229DA0C))(this, storeId);
	}
	template <typename R = bool> R FillProductsb__16(Category c) {
		return ((R (*)(cDisplayClass310*, Category))(Il2CppBase() + 0x229DA20))(this, c);
	}
	template <typename R = void> R FillProductsb__17(int64_t storeId) {
		return ((R (*)(cDisplayClass310*, int64_t))(Il2CppBase() + 0x229DA34))(this, storeId);
	}

};

