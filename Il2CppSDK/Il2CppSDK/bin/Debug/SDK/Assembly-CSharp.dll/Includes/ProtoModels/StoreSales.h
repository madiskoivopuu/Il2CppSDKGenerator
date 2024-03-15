#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class StoreSales
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "StoreSales"));
	}

	 static MessageParser1<ProtoModels::StoreSales*>*& _parser() {
		return *(MessageParser1<ProtoModels::StoreSales*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& SalesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::StoreSale*>*& _repeated_sales_codec() {
		return *(FieldCodec1<ProtoModels::StoreSale*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::StoreSale*>*& sales_() {
		return *(RepeatedField1<ProtoModels::StoreSale*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::StoreSales*>* get_Parser() {
		return ((MessageParser1<ProtoModels::StoreSales*>* (*)(void *))(Il2CppBase() + 0x183D678))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x183D6DC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(StoreSales*))(Il2CppBase() + 0x183D7FC))(this);
	}
	template <typename R = ProtoModels::StoreSales*> R Clone() {
		return ((R (*)(StoreSales*))(Il2CppBase() + 0x183D954))(this);
	}
	 RepeatedField1<ProtoModels::StoreSale*>* get_Sales() {
		return ((RepeatedField1<ProtoModels::StoreSale*>* (*)(StoreSales*))(Il2CppBase() + 0x183D9B0))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(StoreSales*, Il2CppObject*))(Il2CppBase() + 0x183D9B8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::StoreSales* other) {
		return ((R (*)(StoreSales*, ProtoModels::StoreSales*))(Il2CppBase() + 0x183DA28))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(StoreSales*))(Il2CppBase() + 0x183DAB4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(StoreSales*))(Il2CppBase() + 0x183DAE0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(StoreSales*, uintptr_t))(Il2CppBase() + 0x183DB44))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(StoreSales*))(Il2CppBase() + 0x183DBE4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::StoreSales* other) {
		return ((R (*)(StoreSales*, ProtoModels::StoreSales*))(Il2CppBase() + 0x183DC74))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(StoreSales*, uintptr_t))(Il2CppBase() + 0x183DCEC))(this, input);
	}

};

}
