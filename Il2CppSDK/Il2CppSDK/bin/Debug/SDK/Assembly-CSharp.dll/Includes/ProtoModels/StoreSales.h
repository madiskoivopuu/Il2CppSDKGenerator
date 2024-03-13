#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class StoreSales
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "StoreSales"));
	}

	template <typename T = MessageParser1StoreSales*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SalesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1StoreSale*>*> static T& _repeated_sales_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1StoreSale*>*> T& sales_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1StoreSales*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x183D678))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x183D6DC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(StoreSales*))(Il2CppBase() + 0x183D7FC))(this);
	}
	template <typename T = StoreSales*> T Clone() {
		return ((T (*)(StoreSales*))(Il2CppBase() + 0x183D954))(this);
	}
	template <typename T = RepeatedField1StoreSale*>*> T get_Sales() {
		return ((T (*)(StoreSales*))(Il2CppBase() + 0x183D9B0))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(StoreSales*, Il2CppObject*))(Il2CppBase() + 0x183D9B8))(this, other);
	}
	template <typename T = bool> T Equals_1(StoreSales* other) {
		return ((T (*)(StoreSales*, StoreSales*))(Il2CppBase() + 0x183DA28))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(StoreSales*))(Il2CppBase() + 0x183DAB4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StoreSales*))(Il2CppBase() + 0x183DAE0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(StoreSales*, uintptr_t))(Il2CppBase() + 0x183DB44))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(StoreSales*))(Il2CppBase() + 0x183DBE4))(this);
	}
	template <typename T = void> T MergeFrom(StoreSales* other) {
		return ((T (*)(StoreSales*, StoreSales*))(Il2CppBase() + 0x183DC74))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(StoreSales*, uintptr_t))(Il2CppBase() + 0x183DCEC))(this, input);
	}

};

}
