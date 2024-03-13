#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class StoreSale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "StoreSale"));
	}

	template <typename T = MessageParser1StoreSale*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CategoryFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& category_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& StartFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& start_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& EndsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& ends_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& IconFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& icon_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& TitleFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& title_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& TextFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& text_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& WindowFrameImageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& windowFrameImage_() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = MessageParser1StoreSale*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x183C480))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x183C4E4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(StoreSale*))(Il2CppBase() + 0x183C604))(this);
	}
	template <typename T = StoreSale*> T Clone() {
		return ((T (*)(StoreSale*))(Il2CppBase() + 0x183C7A8))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(StoreSale*))(Il2CppBase() + 0x183C804))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(StoreSale*, int64_t))(Il2CppBase() + 0x183C80C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(StoreSale*))(Il2CppBase() + 0x183C814))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(StoreSale*, Il2CppString*))(Il2CppBase() + 0x183C81C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Category() {
		return ((T (*)(StoreSale*))(Il2CppBase() + 0x183C89C))(this);
	}
	template <typename T = void> T set_Category(Il2CppString* value) {
		return ((T (*)(StoreSale*, Il2CppString*))(Il2CppBase() + 0x183C8A4))(this, value);
	}
	template <typename T = int64_t> T get_Start() {
		return ((T (*)(StoreSale*))(Il2CppBase() + 0x183C924))(this);
	}
	template <typename T = void> T set_Start(int64_t value) {
		return ((T (*)(StoreSale*, int64_t))(Il2CppBase() + 0x183C92C))(this, value);
	}
	template <typename T = int64_t> T get_Ends() {
		return ((T (*)(StoreSale*))(Il2CppBase() + 0x183C934))(this);
	}
	template <typename T = void> T set_Ends(int64_t value) {
		return ((T (*)(StoreSale*, int64_t))(Il2CppBase() + 0x183C93C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(StoreSale*))(Il2CppBase() + 0x183C944))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(StoreSale*, Il2CppString*))(Il2CppBase() + 0x183C94C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(StoreSale*))(Il2CppBase() + 0x183C9CC))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(StoreSale*, Il2CppString*))(Il2CppBase() + 0x183C9D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(StoreSale*))(Il2CppBase() + 0x183CA54))(this);
	}
	template <typename T = void> T set_Text(Il2CppString* value) {
		return ((T (*)(StoreSale*, Il2CppString*))(Il2CppBase() + 0x183CA5C))(this, value);
	}
	template <typename T = Il2CppString*> T get_WindowFrameImage() {
		return ((T (*)(StoreSale*))(Il2CppBase() + 0x183CADC))(this);
	}
	template <typename T = void> T set_WindowFrameImage(Il2CppString* value) {
		return ((T (*)(StoreSale*, Il2CppString*))(Il2CppBase() + 0x183CAE4))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(StoreSale*, Il2CppObject*))(Il2CppBase() + 0x183CB64))(this, other);
	}
	template <typename T = bool> T Equals_1(StoreSale* other) {
		return ((T (*)(StoreSale*, StoreSale*))(Il2CppBase() + 0x183CBD4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(StoreSale*))(Il2CppBase() + 0x183CCBC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StoreSale*))(Il2CppBase() + 0x183CE08))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(StoreSale*, uintptr_t))(Il2CppBase() + 0x183CE6C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(StoreSale*))(Il2CppBase() + 0x183D054))(this);
	}
	template <typename T = void> T MergeFrom(StoreSale* other) {
		return ((T (*)(StoreSale*, StoreSale*))(Il2CppBase() + 0x183D2E8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(StoreSale*, uintptr_t))(Il2CppBase() + 0x183D3CC))(this, input);
	}

};

}
