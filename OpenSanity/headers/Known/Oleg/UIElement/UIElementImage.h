#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Graphics/Color.h"
#include "headers/Known/Math/Vector2.h"
#include "headers/Known/Oleg/UIElement/UIElementAbstract.h"

class UIElementImage : public UIElementAbstract {
	public:
		Vector2 pos;
		Vector2 size;

		void Construct();
		virtual void RenderColorTransfomed(Matrix4* transform, Color color);
		void Dispose(byte param_1);
		virtual void ReplaceMaterial(uint id);
		virtual void ReplaceShader(TwinsanityMaterialShader* shader);
		virtual void RenderTransfomed(Matrix4* transform);
		virtual void RenderColor(Color color);
		virtual void Render();
		void Construct_8(TwinsanityMaterialShader* param_1);
		void Construct_9(int param_1, float* param_2, float* param_3);
		void Construct_10(byte param_2, uint param_3);
		void Construct_11(byte param_2, byte param_3, float* param_4, float* param_5);

};
