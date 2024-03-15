#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class StoreSale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "StoreSale"));
	}

	 static MessageParser1<ProtoModels::StoreSale*>*& _parser() {
		return *(MessageParser1<ProtoModels::StoreSale*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CategoryFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& category_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& StartFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& start_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& EndsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& ends_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& IconFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& icon_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& TitleFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& title_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& TextFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& text_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& WindowFrameImageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& windowFrameImage_() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	 static MessageParser1<ProtoModels::StoreSale*>* get_Parser() {
		return ((MessageParser1<ProtoModels::StoreSale*>* (*)(void *))(Il2CppBase() + 0x183C480))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x183C4E4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(StoreSale*))(Il2CppBase() + 0x183C604))(this);
	}
	template <typename R = ProtoModels::StoreSale*> R Clone() {
		return ((R (*)(StoreSale*))(Il2CppBase() + 0x183C7A8))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(StoreSale*))(Il2CppBase() + 0x183C804))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(StoreSale*, int64_t))(Il2CppBase() + 0x183C80C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(StoreSale*))(Il2CppBase() + 0x183C814))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(StoreSale*, Il2CppString*))(Il2CppBase() + 0x183C81C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Category() {
		return ((R (*)(StoreSale*))(Il2CppBase() + 0x183C89C))(this);
	}
	template <typename R = void> R set_Category(Il2CppString* value) {
		return ((R (*)(StoreSale*, Il2CppString*))(Il2CppBase() + 0x183C8A4))(this, value);
	}
	template <typename R = int64_t> R get_Start() {
		return ((R (*)(StoreSale*))(Il2CppBase() + 0x183C924))(this);
	}
	template <typename R = void> R set_Start(int64_t value) {
		return ((R (*)(StoreSale*, int64_t))(Il2CppBase() + 0x183C92C))(this, value);
	}
	template <typename R = int64_t> R get_Ends() {
		return ((R (*)(StoreSale*))(Il2CppBase() + 0x183C934))(this);
	}
	template <typename R = void> R set_Ends(int64_t value) {
		return ((R (*)(StoreSale*, int64_t))(Il2CppBase() + 0x183C93C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Icon() {
		return ((R (*)(StoreSale*))(Il2CppBase() + 0x183C944))(this);
	}
	template <typename R = void> R set_Icon(Il2CppString* value) {
		return ((R (*)(StoreSale*, Il2CppString*))(Il2CppBase() + 0x183C94C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Title() {
		return ((R (*)(StoreSale*))(Il2CppBase() + 0x183C9CC))(this);
	}
	template <typename R = void> R set_Title(Il2CppString* value) {
		return ((R (*)(StoreSale*, Il2CppString*))(Il2CppBase() + 0x183C9D4))(this, value);
	}
	template <typename R = Il2CppString*> R get_Text() {
		return ((R (*)(StoreSale*))(Il2CppBase() + 0x183CA54))(this);
	}
	template <typename R = void> R set_Text(Il2CppString* value) {
		return ((R (*)(StoreSale*, Il2CppString*))(Il2CppBase() + 0x183CA5C))(this, value);
	}
	template <typename R = Il2CppString*> R get_WindowFrameImage() {
		return ((R (*)(StoreSale*))(Il2CppBase() + 0x183CADC))(this);
	}
	template <typename R = void> R set_WindowFrameImage(Il2CppString* value) {
		return ((R (*)(StoreSale*, Il2CppString*))(Il2CppBase() + 0x183CAE4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(StoreSale*, Il2CppObject*))(Il2CppBase() + 0x183CB64))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::StoreSale* other) {
		return ((R (*)(StoreSale*, ProtoModels::StoreSale*))(Il2CppBase() + 0x183CBD4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(StoreSale*))(Il2CppBase() + 0x183CCBC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(StoreSale*))(Il2CppBase() + 0x183CE08))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(StoreSale*, uintptr_t))(Il2CppBase() + 0x183CE6C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(StoreSale*))(Il2CppBase() + 0x183D054))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::StoreSale* other) {
		return ((R (*)(StoreSale*, ProtoModels::StoreSale*))(Il2CppBase() + 0x183D2E8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(StoreSale*, uintptr_t))(Il2CppBase() + 0x183D3CC))(this, input);
	}

};

}
